/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, UIView, NSString;

@interface _SBAlertAccessoryWindowWrapper : NSObject {

	UIWindow* window;
	UIView* contextHostView;
	NSString* contextHostRequester;

}

@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UIView * contextHostView; 
@property (nonatomic,retain) NSString * contextHostRequester; 
-(UIView *)contextHostView;
-(NSString *)contextHostRequester;
-(void)setContextHostView:(UIView *)arg1 ;
-(void)setContextHostRequester:(NSString *)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
@end
