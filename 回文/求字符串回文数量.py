class Solution:
    # 思路与同名 cpp 文件相同
    def getRes(self, start_pos: int, len: int, str_v: str, res: list[int]):
        less_distence = start_pos
        if (start_pos > len / 2):
            less_distence = len - 1 - start_pos
        fp = start_pos
        ep = start_pos
        for i in range(less_distence + 1):
            if (str_v[fp] == str_v[ep]):
                if (str_v[fp] is not '$'):
                    res[0] += 1
                fp -= 1
                ep += 1
            else:
                break
    
    def Substrings(self , str: str) -> int:
        # write code here
        res = [0]
        char_list = list(str)
        str = '$'.join(char_list)
        for i in range(len(str)):
            self.getRes(start_pos=i, len=len(str), str_v=str, res=res)
            
        return res[0]