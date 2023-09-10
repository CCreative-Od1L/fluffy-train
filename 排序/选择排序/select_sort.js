function select_sort (numbers) {
    let size = numbers.length;
    for (let i = 0; i < size - 1; i++) {
        let smallest_index = i;
        for (let j = smallest_index + 1; j < size; j++) {
            if (numbers[j] < numbers[smallest_index]) {
                smallest_index = j;
            }
        }
        if (smallest_index !== i) {
            [numbers[smallest_index], numbers[i]] = [numbers[i], numbers[smallest_index]];
        }
    }
}