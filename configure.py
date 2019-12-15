import os
import requests
import urllib.parse
import re

THIRD_PARTY_PATH = "third_party"


def generate_glad_url():
    origin = "https://glad.dav1d.de"
    data = "language=c&specification=gl&api=gl%3D4.1&api=gles1%3Dnone&api=gles2%3Dnone&api=glsc2%3Dnone&profile=core&loader=on"
    response = requests.post(
        url=urllib.parse.urljoin(origin,  "generate"),
        data=data,
        headers={
            "Content-Type": "application/x-www-form-urlencoded",
        }
    )
    html = response.text
    span = re.search("/generated/[^/]*/glad.zip", html).span()
    glad_url = urllib.parse.urljoin(origin, html[span[0]: span[1]])
    print("Generate glad zip url: {}".format(glad_url))
    return glad_url


def main():
    with open(os.path.join(THIRD_PARTY_PATH, "env.bzl.template"), "r") as f:
        template = f.read()
    content = template.format(glad_url=generate_glad_url())
    with open(os.path.join(THIRD_PARTY_PATH, "env.bzl"), "w") as f:
        f.write(content)


if __name__ == "__main__":
    main()
