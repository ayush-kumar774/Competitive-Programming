def end_arr_add(arr, element)
        arr.push(element)
        # Add `element` to the end of the Array variable `arr` and return `arr`
end

def begin_arr_add(arr, element)
        arr.unshift(element)
        # Add `element` to the beginning of the Array variable `arr` and return `arr`
end
    
def index_arr_add(arr, index, element)
        arr.insert(index, element)
        # Add `element` at position `index` to the Array variable `arr` and return `arr`
end
    
def index_arr_multiple_add(arr, index)
        arr.insert(index, 9 , 99)
        # Add any two elements to the arr at the index
end