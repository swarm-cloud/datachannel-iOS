// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

#import "DCConfiguration.h"
#import "DCDataChannelInit.h"
#import "DCGatheringState.h"
#import "DCIceState.h"
#import "DCLogLevel.h"
#import "DCSignalingState.h"
#import <Foundation/Foundation.h>
@class DCDataChannel;
@class DCPeerConnection;
@protocol DCCandidateCallback;
@protocol DCDcCallback;
@protocol DCGatheringStateCallback;
@protocol DCIceStateCallback;
@protocol DCLogCallback;
@protocol DCSdpCallback;
@protocol DCSignalingStateCallback;


@interface DCPeerConnection : NSObject

- (void)close;

- (void)setRemoteDescription:(nonnull NSString *)sdp;

- (void)addRemoteCandidate:(nonnull NSString *)candidate
                       mid:(nonnull NSString *)mid;

- (void)onLocalDescription:(nullable id<DCSdpCallback>)callback;

- (void)onLocalCandidate:(nullable id<DCCandidateCallback>)callback;

- (void)onStateChange:(nullable id<DCIceStateCallback>)callback;

- (void)onGatheringStateChange:(nullable id<DCGatheringStateCallback>)callback;

- (void)onSignalingStateChange:(nullable id<DCSignalingStateCallback>)callback;

- (DCIceState)state;

- (DCGatheringState)gatheringState;

- (DCSignalingState)signalingState;

- (void)clearStats;

- (int32_t)bytesSent;

- (int32_t)bytesReceived;

- (int64_t)rtt;

- (void)onDataChannel:(nullable id<DCDcCallback>)callback;

- (nullable DCDataChannel *)createDataChannel:(nonnull NSString *)label
                                         init:(nonnull DCDataChannelInit *)init;

+ (nullable DCPeerConnection *)create:(nonnull DCConfiguration *)config;

+ (void)initLogger:(DCLogLevel)level
          callback:(nullable id<DCLogCallback>)callback;

@end