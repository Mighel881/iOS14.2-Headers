/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HUIncomingInvitationResponseControllerDelegate;
@class HMIncomingHomeInvitation, NSError;

@interface HUIncomingInvitationResponseController : NSObject {

	id<HUIncomingInvitationResponseControllerDelegate> _delegate;
	HMIncomingHomeInvitation* _invitation;
	unsigned long long _state;
	unsigned long long _response;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long state;                                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long response;                                                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,__weak,readonly) id<HUIncomingInvitationResponseControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMIncomingHomeInvitation * invitation;                                           //@synthesize invitation=_invitation - In the implementation block
-(id)init;
-(void)setState:(unsigned long long)arg1 ;
-(id<HUIncomingInvitationResponseControllerDelegate>)delegate;
-(NSError *)error;
-(unsigned long long)state;
-(void)setError:(NSError *)arg1 ;
-(void)setResponse:(unsigned long long)arg1 ;
-(HMIncomingHomeInvitation *)invitation;
-(unsigned long long)response;
-(id)initWithDelegate:(id)arg1 invitation:(id)arg2 ;
-(id)_acceptInvitation;
-(id)_declineInvitation;
-(void)respondToInvitationWithResponse:(unsigned long long)arg1 ;
@end

