/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMSpamFilterHelper : NSObject
+(BOOL)isInternationalSpamFilteringEnabled;
+(BOOL)senderIsCandidateForSMSDowngrade:(id)arg1 ;
+(BOOL)isChineseSpamFilteringEnabled;
+(id)mapID:(id)arg1 usingKey:(id)arg2 ;
+(BOOL)senderIsChinaHandle:(id)arg1 ;
+(BOOL)senderIsCandidateForBlackhole:(id)arg1 ;
+(BOOL)senderIsKnownContact:(id)arg1 ;
+(BOOL)anyParticipantIsCandidateForBlackhole:(id)arg1 ;
+(BOOL)anyParticipantIsKnownContact:(id)arg1 ;
+(BOOL)isKnownContact:(id)arg1 ;
+(BOOL)receivingID:(id)arg1 isCountryCode:(id)arg2 ;
+(id)_cnRecordForAliases:(id)arg1 ;
+(BOOL)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(BOOL)arg3 withConversationDowngradeState:(BOOL)arg4 andConversationHistoryState:(BOOL)arg5 ;
+(BOOL)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(BOOL)arg3 givenHistory:(BOOL)arg4 forEligibleAccounts:(BOOL)arg5 ;
+(BOOL)accountRegionIsCandidateForHawking:(id)arg1 ;
+(BOOL)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(BOOL)arg3 withOtherParticipants:(id)arg4 givenHistory:(BOOL)arg5 forEligibleAccounts:(BOOL)arg6 ;
+(BOOL)receiverIsCandidateForSMSFilter:(id)arg1 ;
+(BOOL)accountCountryIsCandidateForHawking:(id)arg1 ;
+(BOOL)accountCountryIsCandidateForSMSFilter:(id)arg1 ;
+(id)sanitizeParticipants:(id)arg1 excludingHandles:(id)arg2 ;
+(id)internationalSpamFilterLearnMoreURL;
+(BOOL)isFilterUnknownSendersEnabled;
+(BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)arg1 ;
+(BOOL)receiverIsCandidateForHawking:(id)arg1 ;
+(void)participantsAreiMessagable:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(BOOL)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(BOOL)arg3 ;
@end

