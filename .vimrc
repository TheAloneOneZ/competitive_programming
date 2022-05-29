set nocompatible              " be iMproved, required
filetype off                  " required

set rtp+=~/.vim/bundle/Vundle.vim

call vundle#begin()

Plugin 'VundleVim/Vundle.vim'
Plugin 'preservim/nerdtree'
Plugin 'NLKNguyen/papercolor-theme'
Plugin 'Chiel92/vim-autoformat'
Plugin 'Yggdroot/indentLine'
Plugin 'tpope/vim-fugitive'
Plugin 'git://git.wincent.com/command-t.git'
Plugin 'rstacruz/sparkup', {'rtp': 'vim/'}
Plugin 'Valloric/YouCompleteMe'

call vundle#end()            " required

filetype plugin indent on    " required


nnoremap <C-n> :NERDTree<CR>
nnoremap <C-t> :NERDTreeToggle<CR>
inoremap kk <enter>
inoremap jj <esc>

au BufWrite * :Autoformat

set t_Co=256   " This is may or may not needed.
set background=dark
colorscheme PaperColor
set number
set laststatus=2
set tabstop=4
set shiftwidth=4
set expandtab
set tw=120
set relativenumber
set noswapfile
set lazyredraw
set scroll=4
noremap <Up> <nop>
noremap <Down> <nop>
noremap <Left> <nop>
noremap <Right> <nop>

let &t_SI="\e[6 q"
let &t_EI="\e[2 q"

