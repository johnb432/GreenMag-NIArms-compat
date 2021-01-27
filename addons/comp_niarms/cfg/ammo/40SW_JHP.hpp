//.40SW JHP
class GEGVAR(ammo,TRIPLES(40SW,JHP,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(40SW_JHP_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\9mm.paa);
};
class GEGVAR(ammo,TRIPLES(40SW,JHP,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(40SW_JHP_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(40SW,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(40SW,JHP,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(40SW_JHP_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(40SW,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(40SW,JHP,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(40SW_JHP_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(40SW,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(40SW,JHP,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(40SW_JHP_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(40SW,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(40SW,JHP,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(40SW_JHP_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(40SW,JHP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(40SW,JHP,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(40SW_JHP_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(40SW,JHP,1Rnd));
};
