/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UILabel.h>

@class FocusedTruncationRenderer;

@interface MFSimpleLabel : UILabel {

	FocusedTruncationRenderer* _renderer;
	id _layout;
	NSRange _focusedRange;

}

@property (assign,nonatomic) NSRange focusedRange;              //@synthesize focusedRange=_focusedRange - In the implementation block
@property (nonatomic,retain) id layout;                         //@synthesize layout=_layout - In the implementation block
-(NSRange)focusedRange;
-(void)setFocusedRange:(NSRange)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setAttributedText:(id)arg1 ;
-(id)layout;
-(void)setLayout:(id)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
@end

