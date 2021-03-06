/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface MailboxGroupedPickerTableCell : UITableViewCell {

	UILabel* _mailboxText;
	UIImageView* _mailboxIcon;
	unsigned _level;
	unsigned _disabled : 1;
	unsigned _rootMailbox : 1;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)fontSize;
-(void)setCurrentMailbox:(BOOL)arg1 ;
-(void)setMailboxType:(int)arg1 ;
-(BOOL)isCellEnabled;
-(int)levelForMailbox:(id)arg1 ;
-(id)_mailboxFontForSize:(double)arg1 ;
-(void)_setupMailboxIconForImage:(id)arg1 ;
-(id)nameForMailbox:(id)arg1 ;
-(double)horizontalContentOffset;
-(void)setMailbox:(id)arg1 ;
-(void)setCellEnabled:(BOOL)arg1 ;
@end

