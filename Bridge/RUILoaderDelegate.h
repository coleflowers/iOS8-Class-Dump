/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUILoaderDelegate <NSObject>
@optional
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4;

@required
-(void)loader:(id)arg1 didFailWithError:(id)arg2;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;

@end

