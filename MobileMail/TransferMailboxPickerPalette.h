/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/_UINavigationControllerPalette.h>

@class NSArray, UILabel, UIImageView, UIView, NSString;

@interface TransferMailboxPickerPalette : _UINavigationControllerPalette {

	NSArray* _senders;
	UILabel* _sendersLabel;
	UILabel* _subjectLabel;
	UIImageView* _messageThumbnailView;
	unsigned long long _messageCount;

}

@property (nonatomic,readonly) UIView * messageThumbnailView;              //@synthesize messageThumbnailView=_messageThumbnailView - In the implementation block
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSArray * senders;                              //@synthesize senders=_senders - In the implementation block
@property (assign,nonatomic) unsigned long long messageCount;              //@synthesize messageCount=_messageCount - In the implementation block
+(double)defaultHeight;
-(void)setMessageThumbnailWithView:(id)arg1 ;
-(UIView *)messageThumbnailView;
-(CGRect)messageThumbnailViewFrame;
-(void)_drawThumbnailInContext:(CGContextRef)arg1 view:(id)arg2 frame:(CGRect)arg3 ;
-(id)_senderStringForWidth:(double)arg1 ;
-(unsigned long long)messageCount;
-(void)setMessageCount:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(NSArray *)senders;
-(void)setSenders:(NSArray *)arg1 ;
@end
