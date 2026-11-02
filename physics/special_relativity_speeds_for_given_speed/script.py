import math

proper_length = int(input("Enter you length : "))

def gamma_factor():
    v=0.990  #v=c times speed
    c=299792458

    v_square=v*v
    c_square=c*c

    denominator = math.sqrt(1-(v_square/c_square))

    return gamma = 1/denominator

 