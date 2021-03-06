/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSDictionary;

@interface SBScrollViewLayoutInfos : NSObject {

	NSDictionary* _indexPathsToFrames;
	NSDictionary* _sectionToNumberOfItems;
	NSDictionary* _sectionToPlaceholderFrames;
	double _contentWidth;
	double _presentationOffset;
	long long _numberOfSections;

}

@property (nonatomic,retain) NSDictionary * indexPathsToFrames;                      //@synthesize indexPathsToFrames=_indexPathsToFrames - In the implementation block
@property (nonatomic,retain) NSDictionary * sectionToNumberOfItems;                  //@synthesize sectionToNumberOfItems=_sectionToNumberOfItems - In the implementation block
@property (nonatomic,retain) NSDictionary * sectionToPlaceholderFrames;              //@synthesize sectionToPlaceholderFrames=_sectionToPlaceholderFrames - In the implementation block
@property (assign,nonatomic) double contentWidth;                                    //@synthesize contentWidth=_contentWidth - In the implementation block
@property (assign,nonatomic) double presentationOffset;                              //@synthesize presentationOffset=_presentationOffset - In the implementation block
@property (assign,nonatomic) long long numberOfSections;                             //@synthesize numberOfSections=_numberOfSections - In the implementation block
-(double)presentationOffset;
-(NSDictionary *)sectionToNumberOfItems;
-(NSDictionary *)indexPathsToFrames;
-(NSDictionary *)sectionToPlaceholderFrames;
-(CGRect)frameForIndexPath:(id)arg1 ;
-(unsigned long long)indexOfLastItemInSection:(unsigned long long)arg1 ;
-(CGRect)frameForSectionPlaceholder:(long long)arg1 ;
-(id)indexPathsOfVisibleItemsInBounds:(CGRect)arg1 ;
-(void)setIndexPathsToFrames:(NSDictionary *)arg1 ;
-(void)setSectionToNumberOfItems:(NSDictionary *)arg1 ;
-(void)setSectionToPlaceholderFrames:(NSDictionary *)arg1 ;
-(void)setPresentationOffset:(double)arg1 ;
-(void)setNumberOfSections:(long long)arg1 ;
-(void)dealloc;
-(long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(double)contentWidth;
-(void)setContentWidth:(double)arg1 ;
@end

