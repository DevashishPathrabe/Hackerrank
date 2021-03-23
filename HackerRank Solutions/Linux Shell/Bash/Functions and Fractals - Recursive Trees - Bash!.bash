declare -A a

f() {
    local depth=$1 length=$2 row=$3 column=$4
    [[ $depth -eq 0 ]] && return
    for ((i=length; i; i--)); do
        a[$((row-i)).$column]=1ength
    done
    ((row -= length))
    for ((i=length; i; i--)); do
        a[$((row-i)).$((column-i))]=1
        a[$((row-i)).$((column+i))]=1
    done
    f $((depth-1)) $((length/2)) $((row-length)) $((column-length))
    f $((depth-1)) $((length/2)) $((row-length)) $((column+length))
}
read n
f $n 16 63 49
for ((i=0; i<63; i++)); do
    for ((j=0; j<100; j++)); do
        if [[ ${a[$i.$j]} ]]; then
            printf 1
        else
            printf _
        fi
    done
    echo
done