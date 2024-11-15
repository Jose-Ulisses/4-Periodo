;Exercicio 1

(defun avaliar_nota (nota)
  (cond
    ((>= nota 90) (format t "A"))
    ((and (>= nota 80) (<= nota 89)) (format t "B"))
    ((and (>= nota 70) (<= nota 79)) (format t "C"))
    ((and (>= nota 60) (<= nota 69)) (format t "D"))
    ((and (>= nota 0) (<= nota 59)) (format t "F"))
  )
)

;Exericio 2

(defvar par)
(Defvar impar)
(defun conta_par_impar (inicio fim)
  (setq par 0)
  (setq impar 0)
  (dotimes (i (+ ( - fim inicio) 1))
    (if(= (mod (+ i inicio) 2 ) 0)   
      (setq par (+ par 1))
      (setq impar (+ impar 1))
    )
  )
  (format t "par: ~D~%" par)
  (format t "impar: ~D~%" impar)
)

;Exercicio 3

(defvar cont)
(defun contar_ocorrencias (el lst)
  (setq cont 0)
  (if (null lst)
    0
    (if (eq el(car lst))
      (+ 1 (contar_ocorrencias el (cdr lst)))
      (contar_ocorrencias el (cdr lst))
    )
  )
)

;Exercicio 4

(defvar lst_impar '())
(defun remove_pares (lst)
  (if (null lst)
    lst_impar
    (cond
      ((= 1 (mod (car lst) 2)) 
        (setq lst_impar (cons (car lst) lst_impar))(remove_pares(cdr lst))
      )
      (t (remove_pares(cdr lst)))
    )
  )
)

;Exercicio 5 
(defun concatena_listas (lst_a lst_b)
  (if (null lst_b)
    lst_a
    (cond 
      (t (setq lst_a (cons (car lst_b) lst_a)) (concatena_listas lst_a (cdr lst_b)))
    )
  )
)

(format t "~A" (concatena_listas '(1 2 3) '(4 5 6)))