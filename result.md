
# dump.sql 2.1MG

time ./a.out dump.sql

```sh
~/D/d/s/g/g/tail >><(( ○> time ./a.out dump.sql                                               [master]

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2017-11-01 17:08:57
        0.00 real         0.00 user         0.00 sys
```

# short.txt 10行以内

```sh
~/D/d/s/g/g/tail >><(( ○> time ./a.out short.txt                    [master]
hoge
foo
fuga
        0.00 real         0.00 user         0.00 sys
```
