/// Qaul Feed Network Message
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct FeedContainer {
    /// signature
    #[prost(bytes="vec", tag="1")]
    pub signature: ::prost::alloc::vec::Vec<u8>,
    /// message content
    #[prost(bytes="vec", tag="2")]
    pub message: ::prost::alloc::vec::Vec<u8>,
}
/// Feed Message Content
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct FeedMessageContent {
    /// sender id
    #[prost(bytes="vec", tag="1")]
    pub sender: ::prost::alloc::vec::Vec<u8>,
    /// message content
    #[prost(string, tag="2")]
    pub content: ::prost::alloc::string::String,
    /// timestamp in milliseconds
    #[prost(uint64, tag="3")]
    pub time: u64,
}
