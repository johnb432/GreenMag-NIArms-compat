//5,45x39 7N6M FMJ
class GEGVAR(ammo,TRIPLES(545x39,7N6M,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_7N6M_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\556mm.paa);
};
class GEGVAR(ammo,TRIPLES(545x39,7N6M,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_7N6M_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N6M,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N6M,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_7N6M_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N6M,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N6M,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_7N6M_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N6M,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N6M,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_7N6M_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N6M,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N6M,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_7N6M_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N6M,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N6M,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(545x39_7N6M_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N6M,1Rnd));
};
