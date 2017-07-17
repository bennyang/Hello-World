
;;
'(line-number-mode 1)
'(linum-mode 1)

;;global-set-key
(global-set-key [f9] `speedbar)
(global-set-key [f10] `switch-to-prev-buffer)
(global-set-key [f11] `switch-to-next-buffer)
(global-set-key [f12] `read-only-mode)


(setq diary-file "~/org/diary.org");; 默认的日记文件 

;;emacs-eim-input-method
(add-to-list 'load-path "~/.emacs.d/site-lisp/eim")
(autoload 'eim-use-package "eim" "Another emacs input method")
;; Tooltip 暂时还不好用
;;(setq eim-use-tooltip nil)

(register-input-method "eim-wb" "euc-cn" 'eim-use-package "五笔" "汉字五笔输入法" "wb.txt")
;;(register-input-method "eim-py" "euc-cn" 'eim-use-package "拼音" "汉字拼音输入法""py.txt"
;;设置eim－wubi为emacs默认输入法
;;(setq default-input-method "eim-wb")


;;在org-mode中自动换行
(add-hook 'org-mode-hook (lambda () (setq truncate-lines nil))) 

(setq require-final-newline t)
;; 自动的在文件末增加一新行

(setq frame-title-format "emacs@%ben.com")
;; 在标题栏显示 buffer 的名字,而不是 emacs@wangyin.com 这样没用的提示。
(setq uniquify-buffer-name-style 'forward);; 好像没起作用
;; 当有两个文件名相同的缓冲时,使用前缀的目录名做 buffer 名字,不用原来的 foobar<?> 形式。
(setq auto-image-file-mode t)
;; 让 Emacs 可以直接打开和显示图片。
;(auto-compression-mode 1)
; 打开压缩文件时自动解压缩。
(setq global-font-lock-mode t)
;; 进行语法加亮。
(setq-default kill-whole-line t)
;; 在行首 C-k 时,同时删除该行。
(add-hook 'comint-output-filter-functions
'comint-watch-for-password-prompt)
;; 当你在 shell 、 telnet 、 w3m 等模式下时,必然碰到过要输入密码的情况 , 此时加密显出你的密码

;;ido 的配置 , 这个可以使你在用 C-x C-f 打开文件的时候在后面有提示 ;
;; 这里是直接打开了 ido 的支持,在 emacs23 中这个是自带的 .
(ido-mode t)
(setq ido-save-directory-list-file nil)
;;ido 模式中不保存目录列表 , 解决退出 Emacs 时 ido 要询问编码的问题。
(setq visible-bell t)
;; 关闭烦人的出错时的提示声
(setq inhibit-startup-message t)
;; 关闭 emacs 启动时的画面
(setq gnus-inhibit-startup-message t)
;; 关闭 gnus 启动时的画面
(fset 'yes-or-no-p 'y-or-n-p)
;; 改变 Emacs 固执的要你回答 yes 的行为。按 y 或空格键表示 yes , n 表示 no 。
(setq font-lock-maximum-decoration t)
(setq font-lock-global-modes '(not shell-mode text-mode))
(setq font-lock-verbose t)
(setq font-lock-maximum-size '((t . 1048576) (vm-mode . 5250000)))
;; 语法高亮。除 shell-mode 和 text-mode 之外的模式中使用语法高亮。

;;------------ 显示时间设置 ------------------------------
(display-time-mode 1);; 启用时间显示设置,在 minibuffer 上面的那个杠上
(setq display-time-24hr-format t);; 时间使用 24 小时制
(setq display-time-day-and-date t);; 时间显示包括日期和具体时间
(setq display-time-use-mail-icon t);; 时间栏旁边启用邮件设置
(setq display-time-interval 10);; 时间的变化频率,单位多少来着?
;;------------ 显示时间设置结束 ---------------------------

;; 语法高亮
(global-font-lock-mode t)
;; 以 y/n 代表 yes/no
(fset 'yes-or-no-p 'y-or-n-p)

;; 显示时间,格式如下
(display-time-mode 1)
(setq display-time-24hr-format t)
(setq display-time-day-and-date t)(transient-mark-mode t)
;; 支持 emacs 和外部程序的粘贴
(setq x-select-enable-clipboard t)
;; 在标题栏提示你目前在什么位置
(setq frame-title-format "%b")

;; 一打开就起用 text 模式。
(setq default-major-mode 'text-mode)

;; all backups goto ~/.backups instead in the current directory
(setq backup-directory-alist (quote (("." . "~/.backups"))))

(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(ansi-color-names-vector
   ["#212526" "#ff4b4b" "#b4fa70" "#fce94f" "#729fcf" "#e090d7" "#8cc4ff" "#eeeeec"])
 '(custom-enabled-themes (quote (manoj-dark)))
 '(default-input-method "british")
 '(display-time-mode t)
 '(line-number-mode nil)
 '(menu-bar-mode nil)
 '(send-mail-function (quote smtpmail-send-it))
 '(size-indication-mode t)
 '(smtpmail-smtp-server "smtp.163.com")
 '(smtpmail-smtp-service 25)
 '(tool-bar-mode nil))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(default ((t (:family "DejaVu Sans Mono" :foundry "unknown" :slant normal :weight normal :height 120 :width normal)))))
