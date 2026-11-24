def itemPairs(num, itemValues, target):
    # WRITE YOUR CODE HERE
    sorted_itemValues = list(set(itemValues))
    tmp_num = len(sorted_itemValues)
    sorted_itemValues.sort()
    anser_num = 0
    if((target / 2) in sorted_itemValues):
        anser_num += 1
    for i in range(tmp_num):
        for j in range(i+1, tmp_num):
            if (sorted_itemValues[i] + sorted_itemValues[j] == target):
                anser_num += 1
                break
            elif(sorted_itemValues[i] + sorted_itemValues[j] > target):
                break
    return anser_num
    pass