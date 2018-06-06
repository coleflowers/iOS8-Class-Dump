/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/NSCopying.h>

@protocol AEAnnotation;
@class AEAnnotationTheme;

@interface AEMarginNote : NSObject <NSCopying> {

	int mSide;
	double mYStart;
	double mYEnd;
	double mXOffset;
	id<AEAnnotation> mAnnotation;
	AEAnnotationTheme* mTheme;

}

@property (nonatomic,retain) AEAnnotationTheme * theme; 
@property (assign,nonatomic) int side; 
@property (nonatomic,retain) id<AEAnnotation> annotation; 
@property (assign,nonatomic) double yStart; 
@property (assign,nonatomic) double yEnd; 
@property (assign,nonatomic) double xOffset; 
-(int)side;
-(void)setSide:(int)arg1 ;
-(double)yStart;
-(void)setYStart:(double)arg1 ;
-(double)yEnd;
-(void)setYEnd:(double)arg1 ;
-(double)xOffset;
-(void)setXOffset:(double)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<AEAnnotation>)annotation;
-(void)setAnnotation:(id<AEAnnotation>)arg1 ;
-(AEAnnotationTheme *)theme;
-(void)setTheme:(AEAnnotationTheme *)arg1 ;
@end
