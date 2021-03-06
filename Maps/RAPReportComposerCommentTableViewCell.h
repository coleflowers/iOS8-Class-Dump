/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class TextViewWithPlaceholderText, NSString;

@interface RAPReportComposerCommentTableViewCell : UITableViewCell {

	TextViewWithPlaceholderText* _textView;
	/*^block*/id _textDidChange;

}

@property (nonatomic,copy) NSString * placeholderText; 
@property (nonatomic,copy) NSString * commentText; 
@property (nonatomic,copy) id textDidChange;                        //@synthesize textDidChange=_textDidChange - In the implementation block
+(double)preferredHeight;
-(void)beginEditingCommentIfPossible;
-(void)setTextDidChange:(id)arg1 ;
-(void)_setFont;
-(id)textDidChange;
-(void)setPropertiesFromQuestion:(id)arg1 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_textDidChange;
-(void)setCommentText:(NSString *)arg1 ;
-(NSString *)commentText;
@end

