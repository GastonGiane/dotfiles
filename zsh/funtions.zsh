config_file () {
	find ~/.config/* -type f | fzf --cycle --height=20% --layout=reverse --border=rounded --margin=5% | xargs -r $EDITOR
}

zle -N config_file

bindkey -s '^[c' 'config_file^M'
