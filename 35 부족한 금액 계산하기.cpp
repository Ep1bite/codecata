long long solution(int price, int money, int count)
{
    long long totalCost = (long long)price * count * (count + 1) / 2;

    return totalCost > money ? totalCost - money : 0;
}

// https://school.programmers.co.kr/learn/courses/30/lessons/82612
