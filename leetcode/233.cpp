class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int width;
        int height;
        
        if(A >= G // rect1 is in the right of rect2
        || C <= E // rect1 is in the left of rect2
        || B >= H // rect1 is above rect2
        || D <= F // rect1 is below rect2
        )
        {// no overlap
            width = 0;
            height = 0;
        }
        else
        {// overlap
            if(A <= E)
                width = min(G - E, C - E);
            else
                width = min(C - A, G - A);
                
            if(D <= H)
                height = min(D - B, D - F);
            else
                height = min(H - F, H - B);
        }
        return (C-A)*(D-B)+(G-E)*(H-F)-height*width;
    }
};