/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, UIImageView, UIButton, NSString, UIImage;

@interface MTContentUnavailableView : UIView {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIView* _containerView;
	UIImageView* _imageView;
	UIButton* _button;
	NSString* _title;
	NSString* _message;
	UIImage* _placeholderImage;
	NSString* _buttonText;
	/*^block*/id _buttonCallback;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;              //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) NSString * buttonText;                   //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) id buttonCallback;                         //@synthesize buttonCallback=_buttonCallback - In the implementation block
+(id)messageLabelWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 message:(id)arg3 ;
-(void)buttonClick;
-(id)buttonCallback;
-(void)setButtonCallback:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setButtonText:(NSString *)arg1 ;
-(NSString *)buttonText;
@end

