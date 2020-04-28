//
//  NativeSig.h
//  livechat
//
//  Created by Nuwan Abeysinghe on 1/10/19.
//  Copyright © 2019 ___NUWAN_ABEYSINGHE___. All rights reserved.
//

#ifndef NativeSig_h
#define NativeSig_h

@class NativeSigImpl;

@interface NativeSigSupport : NSObject
{
    
}

-(instancetype _Nonnull ) initWithInstance:(NativeSigImpl*_Nullable)instance;

- (void)StartWithCustDetails:(NSString * _Nonnull)custDetails vaSession:(NSString * _Nonnull)vaSession;

- (void)EndWithReason:(NSString * _Nonnull)reason;

- (void)Open;

- (int)SendMessageWithType:(NSString * _Nonnull)type msg:(NSString * _Nonnull)msg to:(NSString * _Nonnull)to;

- (void)SetUserAuthWithUser:(NSString * _Nonnull)user auth:(NSString * _Nonnull)auth;

-(NSString*)GetSessionId;


/*
- (void)SetSessionEventsHandlerWithHandler:(id <Livechat_SessionEventsHandler> _Nonnull)handler;
- (void)SetAvCallApiWithAvcallApi:(id <AvCallApi> _Nonnull)avcallApi;
- (void)StartWithCustDetails:(NSString * _Nonnull)custDetails vaSession:(NSString * _Nonnull)vaSession;
- (void)EndWithReason:(NSString * _Nonnull)reason;
- (void)Open;
- (void)SendMessageWithMsg:(NSString * _Nonnull)msg;
- (void)SendAppMessageWithMsg:(NSString * _Nonnull)msg;
- (void)NotifyTypingStateChangeWithState:(NSInteger)state;
*/

@end



#endif /* NativeSig_h */
