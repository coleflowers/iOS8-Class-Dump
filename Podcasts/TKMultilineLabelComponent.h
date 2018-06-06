/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/TKBaseComponent.h>

@class NSString;

@interface TKMultilineLabelComponent : TKBaseComponent {

	float _leftMargin;
	float _rightMargin;
	int _numberOfLines;
	NSString* _text;

}

@property (assign) float leftMargin;               //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign) float rightMargin;              //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign) int numberOfLines;              //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (retain) NSString * text;                //@synthesize text=_text - In the implementation block
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setRightMargin:(float)arg1 ;
-(void)setNumberOfLines:(int)arg1 ;
-(int)numberOfLines;
-(float)rightMargin;
-(float)leftMargin;
-(void)setLeftMargin:(float)arg1 ;
@end
