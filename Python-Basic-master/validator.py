# Author: Zayn
# Author URL: https: // github.com/Zayn-Xavier
# Date: 01: 05: 2020
# Example of a custom module to be imported

import re


def validate_email(email):
    if len(email) > 7:
        return bool(re.match("^.+@(\[?)[a-zA-Z0-9-.]+.([a-zA-Z]{2,3}|[0-9]{1,3})(]?)$", email))
