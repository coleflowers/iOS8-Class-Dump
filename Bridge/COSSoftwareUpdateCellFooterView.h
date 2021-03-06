/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <Bridge/PSHeaderFooterView.h>

@class NSString, UITextView, PSSpecifier;

@interface COSSoftwareUpdateCellFooterView : UIView <UITextViewDelegate, PSHeaderFooterView> {

	NSString* _text;
	UITextView* _textView;
	PSSpecifier* _specifier;

}

@property (nonatomic,retain) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UITextView * textView;                       //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) PSSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PSSpecifier *)specifier;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

