noremap <S-h> ^
noremap <S-l> $
noremap s <Nop>
nmap <Esc><Esc> :nohlsearch<CR><Esc>

syntax on
set background=dark
set termguicolors
colorscheme breezy
"
set showcmd
set cursorline
set laststatus=2
set ruler
set title
set number
set showmatch
set hidden
"
set encoding=utf-8
set fileencoding=utf-8
set fileformat=unix
set nrformats=
"search
set incsearch
set hlsearch
set wrapscan
"indent
set autoindent
set cindent
set pastetoggle=<F5>
set tabstop=4
set shiftwidth=4	
"
set foldmethod=marker
set foldlevelstart=99

call plug#begin()
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
call plug#end()

let g:lightline = {
	\ 'colorscheme': 'breezy',
	\ }
let g:airline_theme='breezy'
let g:airline_powerline_fonts = 1
let g:airline#extensions#tabline#enabled = 1
"let g:airlineEextensions#tabline#buffer_idx_mode = 1
"let g:airlineEextensions#whitespace#mixed_indent_algo = 1

