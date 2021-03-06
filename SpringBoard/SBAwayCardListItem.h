/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class SBSCardItem, UIImage, NSString;

@interface SBAwayCardListItem : SBAwayListItem {

	SBSCardItem* _cardItem;
	UIImage* _cardThumbnail;
	UIImage* _iconImage;

}

@property (nonatomic,copy) SBSCardItem * cardItem;                 //@synthesize cardItem=_cardItem - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * body; 
@property (nonatomic,retain) UIImage * iconImage;                  //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * cardThumbnail;              //@synthesize cardThumbnail=_cardThumbnail - In the implementation block
-(void)setCardThumbnail:(UIImage *)arg1 ;
-(void)setCardItem:(SBSCardItem *)arg1 ;
-(UIImage *)cardThumbnail;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(id)sortDate;
-(NSString *)body;
-(UIImage *)iconImage;
-(BOOL)inertWhenLocked;
-(SBSCardItem *)cardItem;
@end

