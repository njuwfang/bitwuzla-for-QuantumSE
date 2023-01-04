(set-logic QF_BV)
(set-info :status unsat)
(declare-const v0 (_ BitVec 1))
(declare-const v1 (_ BitVec 1))
(assert (= #b1 (bvnot (ite (= (bvmul v0 v1) (bvand v0 v1)) #b1 #b0))))
(check-sat)