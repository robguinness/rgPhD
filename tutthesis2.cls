\NeedsTeXFormat{LaTeX2e}[1995/12/01]
\ProvidesClass{tutthesis2}
              [2014/07/28 v0.5 Extension to basic LaTeX document class 'report']

% Load the basic template 'report.cls'. 
\LoadClassWithOptions{report}

\usepackage[font=small,it, labelsep=space]{caption} % Figure caption text font and size,  *
\usepackage{hyperref}       % pdf links to e.g. figures and citations

\setlength\textwidth{15cm}  % 15*24cm text area leaves 6cm horiz margins and 5.7cm vertical
\setlength\textheight{24cm} % 

\setlength\headheight{15pt} % 

\renewcommand \thetable{
  \ifnum \c@chapter>\z@ \chapfigname.\fi \@arabic\c@table}
\captionsetup[table]{labelfont={bf,it},textfont={it}}
 
%% End of file `tutthesis.cls'.