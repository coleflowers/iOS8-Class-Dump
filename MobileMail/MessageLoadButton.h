/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIButton.h>

@class UIActivityIndicatorView;

@interface MessageLoadButton : UIButton {

	unsigned _needsToSendMouseUpEvents : 1;
	BOOL _isDownloading;
	UIActivityIndicatorView* _spinny;

}
-(void)setDownloading:(BOOL)arg1 ;
-(double)_constrainedLabelWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(long long)_buttonType;
-(void)setText:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)sizeToFit;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3 ;
@end

