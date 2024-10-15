func stableMountains(h []int, t int) []int {
    var arr []int;

    for i:= len(h)-1; i>0; i-- {
        prev := h[i-1]

        if(prev>t){
            arr = append(arr,i)
        }
    }

    return arr;
}