/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKLabelRunDelegate;
@class NSString;

@interface TKLabelRunInformation : NSObject {

	NSString* _idenfitier;
	id<TKLabelRunDelegate> _delegate;

}

@property (nonatomic,copy) NSString * idenfitier;                                 //@synthesize idenfitier=_idenfitier - In the implementation block
@property (assign,nonatomic,__weak) id<TKLabelRunDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)runWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)setIdenfitier:(NSString *)arg1 ;
-(NSString *)idenfitier;
-(void)setDelegate:(id<TKLabelRunDelegate>)arg1 ;
-(id<TKLabelRunDelegate>)delegate;
@end

