/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:59 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SVSStarkTableViewCell.h>

@class NSString, UIImage;

@interface SVSStarkReadAgainTableViewCell : SVSStarkTableViewCell {

	BOOL _isReading;
	NSString* _readAgainTitle;
	UIImage* _readingImage;

}

@property (nonatomic,retain) NSString * readAgainTitle;                                //@synthesize readAgainTitle=_readAgainTitle - In the implementation block
@property (assign,nonatomic) BOOL isReading;                                           //@synthesize isReading=_isReading - In the implementation block
@property (getter=_readingImage,nonatomic,retain) UIImage * readingImage;              //@synthesize readingImage=_readingImage - In the implementation block
-(void)setIsReading:(BOOL)arg1 ;
-(void)setReadingImage:(UIImage *)arg1 ;
-(void)setReadAgainTitle:(NSString *)arg1 ;
-(NSString *)readAgainTitle;
-(BOOL)isReading;
-(id)_readingImage;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)_updateTitle;
@end
