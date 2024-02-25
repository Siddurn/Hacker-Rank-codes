import textwrap

def wrap(string, max_width):
    newStr=""
    for i in range(0,len(string)-1,max_width):
        newStr+=(string[i:i+max_width])+"\n"
        
    return newStr

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
