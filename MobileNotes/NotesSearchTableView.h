/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:43:31 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UITableView.h>

@class UILabel, NSLayoutConstraint;

@interface NotesSearchTableView : UITableView {

	UILabel* _noSearchResultsLabel;
	NSLayoutConstraint* _noSearchResultsLabelTopMarginConstraint;

}

@property (nonatomic,retain) UILabel * noSearchResultsLabel;                                            //@synthesize noSearchResultsLabel=_noSearchResultsLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * noSearchResultsLabelTopMarginConstraint;              //@synthesize noSearchResultsLabelTopMarginConstraint=_noSearchResultsLabelTopMarginConstraint - In the implementation block
-(void)setNoSearchResultsLabelVisible:(BOOL)arg1 ;
-(void)updateNoSearchResultsLabel;
-(UILabel *)noSearchResultsLabel;
-(NSLayoutConstraint *)noSearchResultsLabelTopMarginConstraint;
-(void)setNoSearchResultsLabel:(UILabel *)arg1 ;
-(void)setNoSearchResultsLabelTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
@end

