<?php
    $arr = [
        'box'=>[
            'paper',
            'papirus',
            'orange'
        ],
        'box2'=>[
            'paper',
            'papirus',
            'orange'
        ],
        'box3'=>[
            0=>'paper',
            1=>'papirus',
            2=>'key'
        ],
    ];

    echo 'Found the '.reklookForKey($arr);

    function lookForKey($arr){
        $pile = [];
        array_push($pile, $arr);
        while(!empty($pile)){
            foreach($pile as $key=>$elem){
                foreach($elem as $index=>$value){
                    if(itemIsBox($index)) array_push($pile, $value);
                    elseif((itemIsKey($value))) return $value;
                }
            }
        }
    }

    function rekLookForKey($arr){
        foreach($arr as $key=>$elem){
            foreach($elem as $index=>$value){
                if(itemIsBox($index)) rekLookForKey($value);
                elseif((itemIsKey($value))) return $value;
            }
        }
    }

    function itemIsBox($key){
        if (preg_match('/box/', $key)) return true;
    }

    function itemIskey($value){
        if ($value == 'key') return true;
    }

