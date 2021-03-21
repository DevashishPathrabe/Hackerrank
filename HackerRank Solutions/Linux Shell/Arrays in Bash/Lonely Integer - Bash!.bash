read
arr=($(cat))
echo "${arr[@]}" | tr ' ' '\n' |sort | uniq -u | tr '\n' ' '