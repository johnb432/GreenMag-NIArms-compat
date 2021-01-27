//,300 Blackout SMK
class GEGVAR(ammo,TRIPLES(300BO,SMK,1Rnd)): GEGVAR(core,1Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300BO_SMK_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(300BO,SMK,10Rnd)): GEGVAR(core,10Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300BO_SMK_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,SMK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,SMK,20Rnd)): GEGVAR(core,20Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300BO_SMK_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,SMK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,SMK,30Rnd)): GEGVAR(core,30Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300BO_SMK_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,SMK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,SMK,40Rnd)): GEGVAR(core,40Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300BO_SMK_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,SMK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,SMK,50Rnd)): GEGVAR(core,50Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300BO_SMK_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,SMK,1Rnd));
};
class GEGVAR(ammo,TRIPLES(300BO,SMK,60Rnd)): GEGVAR(core,60Rnd) {
				author = CSTRING(Author);
				displayName = CSTRING(300BO_SMK_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(300BO,SMK,1Rnd));
};
