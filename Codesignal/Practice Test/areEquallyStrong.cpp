bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight)
{
        bool leftEqual = false;
        bool leftRight = false;
        bool rightEqual = false;
        bool rightLeft = false;
        if (yourLeft == friendsLeft)
        {
                leftEqual = true;
        }
        if (yourLeft == friendsRight)
        {
                leftRight = true;
        }
        if (yourRight == friendsRight)
        {
                rightEqual = true;
        }
        if (yourRight == friendsLeft)
        {
                rightLeft = true;
        }
        if ((leftEqual && rightEqual) || (leftRight && rightLeft))
        {
                return true;
        }
        else
        {
                return false;
        }
}