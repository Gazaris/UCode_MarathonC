while IPS= read -r line || [ -n "$line" ]; do if [[ $line =~ ^[rR][eE][dD][pP][iI][lL][lL].+ ]]; then echo ${line//[rR][eE][dD][pP][iI][lL][lL]/bluepill} & fi done < $1
