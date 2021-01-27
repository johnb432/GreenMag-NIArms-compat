//.300win A191 (BTSP)
class GEGVAR(ammo,TRIPLES(300win,A191,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300win_A191_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\lcal.paa);
};
class GEGVAR(ammo,TRIPLES(300win,A191,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300win_A191_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,A191,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,A191,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300win_A191_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,A191,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,A191,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300win_A191_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,A191,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,A191,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300win_A191_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,A191,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,A191,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300win_A191_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,A191,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300win,A191,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300win_A191_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300win,A191,1Rnd));
};
