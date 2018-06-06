/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _MFDelayedMessage : NSObject {

	unsigned _state;
	id _message;
	NSString* _identifier;
	double _submissionDate;
	id _context;

}

@property (nonatomic,retain) id message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double submissionDate;              //@synthesize submissionDate=_submissionDate - In the implementation block
@property (nonatomic,retain) id context;                         //@synthesize context=_context - In the implementation block
-(double)submissionDate;
-(id)initWithMessage:(id)arg1 identifier:(id)arg2 submissionDate:(double)arg3 context:(id)arg4 ;
-(BOOL)isInvalidated;
-(void)setSubmissionDate:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSString *)identifier;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)message;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)process;
-(BOOL)isProcessing;
@end

