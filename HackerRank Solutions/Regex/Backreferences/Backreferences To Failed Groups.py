Regex_Pattern = r"^((\d{2}-){3}\d{2}|\d{8})$"	# Do not delete 'r'.

import re

print(str(bool(re.search(Regex_Pattern, input()))).lower())