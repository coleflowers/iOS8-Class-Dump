/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSDictionary;

@interface IMNowPlayingContentLabel : UIView {

	NSString* _fullString;
	NSDictionary* _stringAttributes;
	CTFramesetterRef _framesetter;
	CTFrameRef _frame;
	BOOL _highlighted;

}

@property (assign,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(id)stringAttributes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)update;
-(BOOL)highlighted;
@end

