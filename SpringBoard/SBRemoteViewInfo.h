/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString, SBProxyRemoteView, SBApplication;

@interface SBRemoteViewInfo : NSObject {

	NSString* _remoteViewIdentifier;
	SBProxyRemoteView* _proxyRemoteView;
	unsigned _contextID;
	SBApplication* _application;
	CGSize _viewSize;

}

@property (nonatomic,retain) NSString * remoteViewIdentifier;                  //@synthesize remoteViewIdentifier=_remoteViewIdentifier - In the implementation block
@property (nonatomic,retain) SBProxyRemoteView * proxyRemoteView;              //@synthesize proxyRemoteView=_proxyRemoteView - In the implementation block
@property (assign,nonatomic) unsigned contextID;                               //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,retain) SBApplication * application;                      //@synthesize application=_application - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                  //@synthesize viewSize=_viewSize - In the implementation block
-(void)setRemoteViewIdentifier:(NSString *)arg1 ;
-(SBProxyRemoteView *)proxyRemoteView;
-(void)setProxyRemoteView:(SBProxyRemoteView *)arg1 ;
-(void)setApplication:(SBApplication *)arg1 ;
-(void)dealloc;
-(unsigned)contextID;
-(NSString *)remoteViewIdentifier;
-(CGSize)viewSize;
-(void)setContextID:(unsigned)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(SBApplication *)application;
@end

