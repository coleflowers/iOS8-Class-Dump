/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSString;

@interface SBGestureViewCacheNode : NSObject {

	UIView* m_view;
	int m_viewType;
	NSString* m_contextHostViewRequester;
	long long m_orientation;
	NSString* m_bundleIdentifier;
	BOOL m_includesStatusBar;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) int viewType; 
@property (nonatomic,copy) NSString * contextHostViewRequester; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (assign,nonatomic) BOOL includesStatusBar; 
+(id)node;
-(void)setContextHostViewRequester:(NSString *)arg1 ;
-(void)setViewType:(int)arg1 ;
-(NSString *)contextHostViewRequester;
-(BOOL)includesStatusBar;
-(void)setIncludesStatusBar:(BOOL)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(NSString *)bundleIdentifier;
-(long long)orientation;
-(void)setView:(UIView *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(int)viewType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

